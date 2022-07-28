inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 33, 4, 2 }));
  set_short( "Hallway - x33y4z2" );
set_objects( DIR+"/npc/ratqueen.c");
 set_exits( ([
  "west" : DIR+"/rooms/x32y4z2.c",
  "east" : DIR+"/rooms/x34y4z2.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the purple glow of the gunk in this hellhole. The walls and floors are covered with mud. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
