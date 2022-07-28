inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 57, 52, 7 }));
  set_short( "Passage - x57y52z7" );
set_objects( DIR+"/npc/mila.c");
 set_exits( ([
  "west" : DIR+"/rooms/x56y52z7.c",
  "east" : DIR+"/rooms/x58y52z7.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the purple glow of the crud in this sty. The walls and floors are covered with oil. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
