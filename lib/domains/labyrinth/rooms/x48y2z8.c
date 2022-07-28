inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 48, 2, 8 }));
  set_short( "Corridor - x48y2z8" );
set_objects( DIR+"/npc/blob.c");
 set_exits( ([
  "west" : DIR+"/rooms/x47y2z8.c",
  "east" : DIR+"/rooms/x49y2z8.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the orange glow of the muck in this stink-pit. The walls and floors are covered with blood. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
