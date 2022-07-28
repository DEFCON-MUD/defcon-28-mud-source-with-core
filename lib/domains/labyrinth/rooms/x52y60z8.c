inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 52, 60, 8 }));
  set_short( "Passage - x52y60z8" );
set_objects( DIR+"/npc/monkey.c");
 set_exits( ([
  "west" : DIR+"/rooms/x51y60z8.c",
  "east" : DIR+"/rooms/x53y60z8.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the green glow of the crap in this area. The walls and floors are covered with liquid. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
