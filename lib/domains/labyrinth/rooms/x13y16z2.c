inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 13, 16, 2 }));
  set_short( "Passage - x13y16z2" );
set_objects( DIR+"/npc/mutatedcockroach.c");
 set_exits( ([
  "east" : DIR+"/rooms/x14y16z2.c",
  "north" : DIR+"/rooms/x13y17z2.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the purple glow of the gunk in this area. The walls and floors are covered with mud. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the east, and north.%^RESET%^");
}
