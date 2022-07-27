inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 43, 52, 9 }));
  set_short( "Hallway - x43y52z9" );
set_objects( DIR+"/monsters/blob.c");
 set_exits( ([
  "north" : DIR+"/rooms/x43y53z9.c",
  "south" : DIR+"/rooms/x43y51z9.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the purple glow of the pile of GPUs that burned so bright they went radioactive in this joint. The walls and floors are covered with mud. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
