inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 31, 32, 9 }));
  set_short( "Hallway - x31y32z9" );
set_objects( DIR+"/npc/ferret.c");
 set_exits( ([
  "east" : DIR+"/rooms/x32y32z9.c",
  "north" : DIR+"/rooms/x31y33z9.c",
  "south" : DIR+"/rooms/x31y31z9.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the blue glow of the crud in this area. The walls and floors are covered with oil. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the east, north, and west.%^RESET%^");
}
