inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 59, 5 }));
  set_short( "Passage - x23y59z5" );
set_objects( DIR+"/npc/fieldmouse.c");
 set_exits( ([
  "north" : DIR+"/rooms/x23y60z5.c",
  "south" : DIR+"/rooms/x23y58z5.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the orange glow of the pile of put kevin back stickers in this stink-pit. The walls and floors are covered with oil. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
