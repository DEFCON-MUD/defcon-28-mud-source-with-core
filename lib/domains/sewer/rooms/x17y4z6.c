inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 17, 4, 6 }));
  set_short( "Corridor - x17y4z6" );
set_objects( DIR+"/monsters/watersnake.c");
 set_exits( ([
  "west" : DIR+"/rooms/x16y4z6.c",
  "east" : DIR+"/rooms/x18y4z6.c",
  "north" : DIR+"/rooms/x17y5z6.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the red glow of the crap in this sty. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe horror continues to the west, east, and north.%^RESET%^");
}
