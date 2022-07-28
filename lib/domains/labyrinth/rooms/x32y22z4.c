inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 32, 22, 4 }));
  set_short( "Corridor - x32y22z4" );
set_objects( DIR+"/npc/fieldmouse.c");
 set_exits( ([
  "west" : DIR+"/rooms/x31y22z4.c",
  "east" : DIR+"/rooms/x33y22z4.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the iridium glow of the crappy sales material in this joint. The walls and floors are covered with mud. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
