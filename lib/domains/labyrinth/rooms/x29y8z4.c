inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 8, 4 }));
  set_short( "Hallway - x29y8z4" );
set_objects( DIR+"/npc/grunt.c");
 set_exits( ([
  "west" : DIR+"/rooms/x28y8z4.c",
  "east" : DIR+"/rooms/x30y8z4.c",
  "north" : DIR+"/rooms/x29y9z4.c",
  "south" : DIR+"/rooms/x29y7z4.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the red glow of the sludge in this joint. The walls and floors are covered with slime. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the west, east, north, and west.%^RESET%^");
}
