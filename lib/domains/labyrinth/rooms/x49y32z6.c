inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 49, 32, 6 }));
  set_short( "Hallway - x49y32z6" );
set_objects( DIR+"/npc/technician.c");
 set_exits( ([
  "west" : DIR+"/rooms/x48y32z6.c",
  "north" : DIR+"/rooms/x49y33z6.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the blue glow of the sludge in this dump. The walls and floors are covered with oil. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the west, and north.%^RESET%^");
}
