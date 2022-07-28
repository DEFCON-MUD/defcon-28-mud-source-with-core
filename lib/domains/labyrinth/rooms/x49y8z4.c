inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 49, 8, 4 }));
  set_short( "Passage - x49y8z4" );
set_objects( DIR+"/npc/tech.c");
 set_exits( ([
  "north" : DIR+"/rooms/x49y9z4.c",
  "south" : DIR+"/rooms/x49y7z4.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the green glow of the muck in this dump. The walls and floors are covered with oil. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
