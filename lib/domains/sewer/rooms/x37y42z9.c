inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 37, 42, 9 }));
  set_short( "Passage - x37y42z9" );
set_objects( DIR+"/monsters/watersnake.c");
 set_exits( ([
  "north" : DIR+"/rooms/x37y43z9.c",
  "south" : DIR+"/rooms/x37y41z9.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the green glow of the gunk in this dump. The walls and floors are covered with oil. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
