inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 46, 40, 5 }));
  set_short( "Hallway - x46y40z5" );
set_objects( DIR+"/npc/r1carmella.c");
 set_exits( ([
  "west" : DIR+"/rooms/x45y40z5.c",
  "east" : DIR+"/rooms/x47y40z5.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the iridium glow of the gunk in this dump. The walls and floors are covered with oil. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
