inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 21, 25, 8 }));
  set_short( "Passage - x21y25z8" );
set_objects( DIR+"/monsters/wendy.c");
 set_exits( ([
  "north" : DIR+"/rooms/x21y26z8.c",
  "south" : DIR+"/rooms/x21y24z8.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the blue glow of the sludge in this stink-pit. The walls and floors are covered with oil. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
