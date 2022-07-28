inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 33, 26, 7 }));
  set_short( "Hallway - x33y26z7" );
set_objects( DIR+"/npc/tinyweevil.c");
 set_exits( ([
  "west" : DIR+"/rooms/x32y26z7.c",
  "south" : DIR+"/rooms/x33y25z7.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the green glow of the crud in this dump. The walls and floors are covered with oil. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the west, and west.%^RESET%^");
}
