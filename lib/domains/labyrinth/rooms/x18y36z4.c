inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 18, 36, 4 }));
  set_short( "Passage - x18y36z4" );
set_objects( DIR+"/npc/japanesebeetle.c");
 set_exits( ([
  "west" : DIR+"/rooms/x17y36z4.c",
  "east" : DIR+"/rooms/x19y36z4.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the iridium glow of the crap in this sty. The walls and floors are covered with oil. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
