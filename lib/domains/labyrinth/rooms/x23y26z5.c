inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 26, 5 }));
  set_short( "Corridor - x23y26z5" );
set_objects( DIR+"/npc/steve.c");
 set_exits( ([
  "west" : DIR+"/rooms/x22y26z5.c",
  "south" : DIR+"/rooms/x23y25z5.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the green glow of the glorzo in this joint. The walls and floors are covered with dust. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the west, and west.%^RESET%^");
}
