inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 28, 9 }));
  set_short( "Hallway - x19y28z9" );
set_objects( DIR+"/monsters/wasteworm.c");
 set_exits( ([
  "east" : DIR+"/rooms/x20y28z9.c",
  "north" : DIR+"/rooms/x19y29z9.c",
  "south" : DIR+"/rooms/x19y27z9.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the purple glow of the pile of GPUs that burned so bright they went radioactive in this hellhole. The walls and floors are covered with oil. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the east, north, and west.%^RESET%^");
}
