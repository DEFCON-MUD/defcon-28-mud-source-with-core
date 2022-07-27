inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 44, 6 }));
  set_short( "Passage - x19y44z6" );
set_objects( DIR+"/monsters/iguana.c");
 set_exits( ([
  "west" : DIR+"/rooms/x18y44z6.c",
  "south" : DIR+"/rooms/x19y43z6.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the iridium glow of the crud in this stink-pit. The walls and floors are covered with mud. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the west, and west.%^RESET%^");
}
