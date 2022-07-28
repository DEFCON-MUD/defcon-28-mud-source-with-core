inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 57, 12, 6 }));
  set_short( "Corridor - x57y12z6" );
set_objects( DIR+"/npc/cyclophant.c");
 set_exits( ([
  "north" : DIR+"/rooms/x57y13z6.c",
  "south" : DIR+"/rooms/x57y11z6.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the red glow of the muck in this area. The walls and floors are covered with dust. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
