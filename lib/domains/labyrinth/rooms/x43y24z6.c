inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 43, 24, 6 }));
  set_short( "Passage - x43y24z6" );
set_objects( DIR+"/npc/hans.c");
 set_exits( ([
  "west" : DIR+"/rooms/x42y24z6.c",
  "south" : DIR+"/rooms/x43y23z6.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the orange glow of the sludge in this stink-pit. The walls and floors are covered with mud. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the west, and west.%^RESET%^");
}
