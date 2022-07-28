inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 8, 3 }));
  set_short( "Passage - x23y8z3" );
set_objects( DIR+"/npc/weevil.c");
 set_exits( ([
  "north" : DIR+"/rooms/x23y9z3.c",
  "south" : DIR+"/rooms/x23y7z3.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the green glow of the crud in this joint. The walls and floors are covered with liquid. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
