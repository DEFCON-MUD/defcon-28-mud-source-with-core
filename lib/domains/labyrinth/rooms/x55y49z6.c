inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 49, 6 }));
  set_short( "Hallway - x55y49z6" );
set_objects( DIR+"/npc/wendy.c");
 set_exits( ([
  "north" : DIR+"/rooms/x55y50z6.c",
  "south" : DIR+"/rooms/x55y48z6.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the green glow of the pile of put kevin back stickers in this area. The walls and floors are covered with blood. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
