inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 57, 23, 8 }));
  set_short( "Hallway - x57y23z8" );
set_objects( DIR+"/npc/wasteworm.c");
 set_exits( ([
  "north" : DIR+"/rooms/x57y24z8.c",
  "south" : DIR+"/rooms/x57y22z8.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the blue glow of the sludge in this sty. The walls and floors are covered with mud. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
