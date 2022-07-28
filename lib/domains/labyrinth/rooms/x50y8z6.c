inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 50, 8, 6 }));
  set_short( "Passage - x50y8z6" );
set_objects( DIR+"/npc/banker.c");
 set_exits( ([
  "west" : DIR+"/rooms/x49y8z6.c",
  "east" : DIR+"/rooms/x51y8z6.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the red glow of the muck in this joint. The walls and floors are covered with liquid. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
