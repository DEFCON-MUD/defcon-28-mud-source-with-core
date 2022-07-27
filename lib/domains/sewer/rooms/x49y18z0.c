inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 49, 18, 0 }));
  set_short( "Hallway - x49y18z0" );
set_objects( DIR+"/monsters/hkle.c");
 set_exits( ([
  "north" : DIR+"/rooms/x49y19z0.c",
  "south" : DIR+"/rooms/x49y17z0.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the red glow of the crud in this area. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
