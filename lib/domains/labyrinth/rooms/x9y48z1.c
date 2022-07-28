inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 9, 48, 1 }));
  set_short( "Hallway - x9y48z1" );
set_objects( DIR+"/npc/dancer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x8y48z1.c",
  "south" : DIR+"/rooms/x9y47z1.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the iridium glow of the sludge in this hellhole. The walls and floors are covered with dust. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the west, and west.%^RESET%^");
}
