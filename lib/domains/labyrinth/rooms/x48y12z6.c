inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 48, 12, 6 }));
  set_short( "Hallway - x48y12z6" );
set_objects( DIR+"/npc/housingofficer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x47y12z6.c",
  "east" : DIR+"/rooms/x49y12z6.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the purple glow of the crap in this hellhole. The walls and floors are covered with oil. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
