inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 57, 17, 8 }));
  set_short( "Passage - x57y17z8" );
set_objects( DIR+"/npc/kavi.c");
 set_exits( ([
  "north" : DIR+"/rooms/x57y18z8.c",
  "south" : DIR+"/rooms/x57y16z8.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the purple glow of the crud in this joint. The walls and floors are covered with dust. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
