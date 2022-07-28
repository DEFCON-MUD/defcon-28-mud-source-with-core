inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 42, 6 }));
  set_short( "Passage - x29y42z6" );
set_objects( DIR+"/npc/housingofficer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x28y42z6.c",
  "south" : DIR+"/rooms/x29y41z6.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the green glow of the glorzo in this dump. The walls and floors are covered with slime. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the west, and west.%^RESET%^");
}
