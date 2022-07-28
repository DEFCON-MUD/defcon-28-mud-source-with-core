inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 57, 13, 8 }));
  set_short( "Passage - x57y13z8" );
set_objects( DIR+"/npc/ferret.c");
 set_exits( ([
  "north" : DIR+"/rooms/x57y14z8.c",
  "south" : DIR+"/rooms/x57y12z8.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the orange glow of the pile of GPUs that burned so bright they went radioactive in this sty. The walls and floors are covered with blood. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
