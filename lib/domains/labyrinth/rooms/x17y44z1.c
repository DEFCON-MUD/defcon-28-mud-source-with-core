inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 17, 44, 1 }));
  set_short( "Hallway - x17y44z1" );
set_objects( DIR+"/npc/lulams.c");
 set_exits( ([
  "west" : DIR+"/rooms/x16y44z1.c",
  "north" : DIR+"/rooms/x17y45z1.c",
  "south" : DIR+"/rooms/x17y43z1.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the orange glow of the sludge in this area. The walls and floors are covered with blood. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the west, north, and west.%^RESET%^");
}
