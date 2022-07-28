inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 21, 43, 9 }));
  set_short( "Corridor - x21y43z9" );
set_objects( DIR+"/npc/freddy.c");
 set_exits( ([
  "north" : DIR+"/rooms/x21y44z9.c",
  "south" : DIR+"/rooms/x21y42z9.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the blue glow of the sludge in this dump. The walls and floors are covered with mud. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
