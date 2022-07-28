inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 57, 16, 6 }));
  set_short( "Hallway - x57y16z6" );
set_objects( DIR+"/npc/eastclerk.c");
 set_exits( ([
  "west" : DIR+"/rooms/x56y16z6.c",
  "east" : DIR+"/rooms/x58y16z6.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the purple glow of the glorzo in this dump. The walls and floors are covered with oil. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
