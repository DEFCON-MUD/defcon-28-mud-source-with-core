inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 49, 42, 2 }));
  set_short( "Passage - x49y42z2" );
set_objects( DIR+"/npc/powerdrone.c");
 set_exits( ([
  "west" : DIR+"/rooms/x48y42z2.c",
  "south" : DIR+"/rooms/x49y41z2.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the red glow of the glorzo in this hellhole. The walls and floors are covered with slime. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the west, and west.%^RESET%^");
}
