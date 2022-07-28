inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 22, 52, 7 }));
  set_short( "Passage - x22y52z7" );
set_objects( DIR+"/npc/randy.c");
 set_exits( ([
  "west" : DIR+"/rooms/x21y52z7.c",
  "east" : DIR+"/rooms/x23y52z7.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the red glow of the muck in this dump. The walls and floors are covered with dust. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
