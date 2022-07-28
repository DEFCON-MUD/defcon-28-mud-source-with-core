inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 15, 25, 5 }));
  set_short( "Corridor - x15y25z5" );
set_objects( DIR+"/npc/groupie.c");
 set_exits( ([
  "north" : DIR+"/rooms/x15y26z5.c",
  "south" : DIR+"/rooms/x15y24z5.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the orange glow of the sludge in this area. The walls and floors are covered with liquid. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
