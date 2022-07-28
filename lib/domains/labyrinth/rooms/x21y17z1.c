inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 21, 17, 1 }));
  set_short( "Hallway - x21y17z1" );
set_objects( DIR+"/npc/jenny.c");
 set_exits( ([
  "north" : DIR+"/rooms/x21y18z1.c",
  "south" : DIR+"/rooms/x21y16z1.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the red glow of the gunk in this dump. The walls and floors are covered with liquid. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
