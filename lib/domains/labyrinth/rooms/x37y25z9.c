inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 37, 25, 9 }));
  set_short( "Passage - x37y25z9" );
set_objects( DIR+"/npc/greensnake.c");
 set_exits( ([
  "north" : DIR+"/rooms/x37y26z9.c",
  "south" : DIR+"/rooms/x37y24z9.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the blue glow of the crud in this dump. The walls and floors are covered with liquid. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
