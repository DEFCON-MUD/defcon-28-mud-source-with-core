inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 13, 9 }));
  set_short( "Hallway - x29y13z9" );
set_objects( DIR+"/npc/neelo.c");
 set_exits( ([
  "north" : DIR+"/rooms/x29y14z9.c",
  "south" : DIR+"/rooms/x29y12z9.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the orange glow of the gunk in this area. The walls and floors are covered with dust. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
