inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 45, 60, 2 }));
  set_short( "Passage - x45y60z2" );
set_objects( DIR+"/npc/weevil.c");
 set_exits( ([
  "west" : DIR+"/rooms/x44y60z2.c",
  "south" : DIR+"/rooms/x45y59z2.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the orange glow of the crud in this joint. The walls and floors are covered with oil. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the west, and west.%^RESET%^");
}
