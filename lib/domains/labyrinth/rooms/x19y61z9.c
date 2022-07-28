inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 61, 9 }));
  set_short( "Hallway - x19y61z9" );
set_objects( DIR+"/npc/eastauthorizer.c");
 set_exits( ([
  "north" : DIR+"/rooms/x19y62z9.c",
  "south" : DIR+"/rooms/x19y60z9.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the red glow of the gunk in this dump. The walls and floors are covered with slime. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
