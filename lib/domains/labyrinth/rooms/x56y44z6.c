inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 56, 44, 6 }));
  set_short( "Corridor - x56y44z6" );
set_objects( DIR+"/npc/josef.c");
 set_exits( ([
  "west" : DIR+"/rooms/x55y44z6.c",
  "east" : DIR+"/rooms/x57y44z6.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the iridium glow of the muck in this hellhole. The walls and floors are covered with mud. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
