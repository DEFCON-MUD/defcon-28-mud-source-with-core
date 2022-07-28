inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 34, 62, 1 }));
  set_short( "Hallway - x34y62z1" );
set_objects( DIR+"/npc/hans.c");
 set_exits( ([
  "west" : DIR+"/rooms/x33y62z1.c",
  "east" : DIR+"/rooms/x35y62z1.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the iridium glow of the sludge in this stink-pit. The walls and floors are covered with slime. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
