inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 61, 4 }));
  set_short( "Corridor - x61y61z4" );
set_objects( DIR+"/npc/neelo.c");
 set_exits( ([
  "north" : DIR+"/rooms/x61y62z4.c",
  "south" : DIR+"/rooms/x61y60z4.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the green glow of the muck in this dump. The walls and floors are covered with oil. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
