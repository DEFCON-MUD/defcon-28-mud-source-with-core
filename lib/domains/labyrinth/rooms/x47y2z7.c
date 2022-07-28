inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 47, 2, 7 }));
  set_short( "Hallway - x47y2z7" );
set_objects( DIR+"/npc/vampire.c");
 set_exits( ([
  "west" : DIR+"/rooms/x46y2z7.c",
  "east" : DIR+"/rooms/x48y2z7.c",
  "south" : DIR+"/rooms/x47y1z7.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the red glow of the muck in this sty. The walls and floors are covered with oil. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the west, east, and west.%^RESET%^");
}
