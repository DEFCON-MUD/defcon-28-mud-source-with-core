inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 16, 6 }));
  set_short( "Hallway - x53y16z6" );
set_objects( DIR+"/npc/fieldmouse.c");
 set_exits( ([
  "east" : DIR+"/rooms/x54y16z6.c",
  "north" : DIR+"/rooms/x53y17z6.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the blue glow of the muck in this joint. The walls and floors are covered with blood. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the east, and north.%^RESET%^");
}
