inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 44, 8 }));
  set_short( "Hallway - x55y44z8" );
set_objects( DIR+"/npc/pottles.c");
 set_exits( ([
  "west" : DIR+"/rooms/x54y44z8.c",
  "south" : DIR+"/rooms/x55y43z8.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the blue glow of the sludge in this sty. The walls and floors are covered with blood. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the west, and west.%^RESET%^");
}
