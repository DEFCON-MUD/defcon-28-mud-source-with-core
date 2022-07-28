inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 52, 24, 8 }));
  set_short( "Passage - x52y24z8" );
set_objects( DIR+"/npc/loser.c");
 set_exits( ([
  "west" : DIR+"/rooms/x51y24z8.c",
  "east" : DIR+"/rooms/x53y24z8.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the red glow of the sludge in this dump. The walls and floors are covered with mud. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
