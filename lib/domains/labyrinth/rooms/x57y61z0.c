inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 57, 61, 0 }));
  set_short( "Passage - x57y61z0" );
set_objects( DIR+"/npc/jackie.c");
 set_exits( ([
  "north" : DIR+"/rooms/x57y62z0.c",
  "south" : DIR+"/rooms/x57y60z0.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the green glow of the gunk in this dump. The walls and floors are covered with mud. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
