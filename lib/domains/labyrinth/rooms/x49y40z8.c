inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 49, 40, 8 }));
  set_short( "Passage - x49y40z8" );
set_objects( DIR+"/npc/monkey.c");
 set_exits( ([
  "west" : DIR+"/rooms/x48y40z8.c",
  "east" : DIR+"/rooms/x50y40z8.c",
  "south" : DIR+"/rooms/x49y39z8.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the green glow of the gunk in this sty. The walls and floors are covered with oil. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the west, east, and west.%^RESET%^");
}
