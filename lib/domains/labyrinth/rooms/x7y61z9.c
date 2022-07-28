inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 7, 61, 9 }));
  set_short( "Passage - x7y61z9" );
set_objects( DIR+"/npc/kavi.c");
 set_exits( ([
  "north" : DIR+"/rooms/x7y62z9.c",
  "south" : DIR+"/rooms/x7y60z9.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the blue glow of the sludge in this stink-pit. The walls and floors are covered with oil. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
