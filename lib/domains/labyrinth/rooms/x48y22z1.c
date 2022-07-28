inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 48, 22, 1 }));
  set_short( "Passage - x48y22z1" );
set_objects( DIR+"/npc/cyclophant.c");
 set_exits( ([
  "west" : DIR+"/rooms/x47y22z1.c",
  "east" : DIR+"/rooms/x49y22z1.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the purple glow of the sludge in this dump. The walls and floors are covered with oil. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
